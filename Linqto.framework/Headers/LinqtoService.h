//
//  LinqtoService.h
//  Linqto
//
//  Created by Wontai Ki on 7/30/16.
//  Copyright © 2016 Wontai Ki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinqtoConstants.h"
#import "LinqtoUserActivity.h"
#import "LinqtoProperty.h"
#import "LinqtoPropertyList.h"

/*!
   @class LinqtoService
   @brief Main class of SDK
 */
@interface LinqtoService : NSObject

// will be removed in the future
@property (strong, nonatomic, readonly) LinqtoPropertyList* linqtoJSONPropertyList;
@property (strong, nonatomic, readonly) LinqtoPropertyList* linqtoXMLPropertyList;

/*!
   @function instance
   @brief Get Singleton Object of LinqtoService class. (Class function)
   @return LinqtoService type (Singleton Object)
 */
+ (LinqtoService*) instance;

/*!
    @function allPropertyKeys
    @brief Get All Keys in PropertyLists
    @return NSArray of all keys in property list.
 */
- (NSArray*) allPropertyKeys;

//#ifdef LINQTO_DEBUG
// Temporal method, these methods will be removed in production.
- (NSArray*) allJSONPropertyKeys;
- (NSArray*) allXMLPropertyKeys;
//#endif

/*!
    @function getDeviceId
    @brief get DeviceID value (UUID)
    @return NSString of uuid.
 */
- (NSString*) getDeviceId;

/*!
    @function getProperty 
    @brief Get Property value for key
    @param key : NSString
    @return value : NSString in propertylist, if there is no value, return nil
 */
- (NSString*) getProperty:(NSString*)key;

//#ifdef LINQTO_DEBUG
// Temporal method, these methods will be removed in production.
- (LinqtoProperty*) getJSONProperty:(NSString *)key;
- (LinqtoProperty*) getXMLProperty:(NSString *)key;
//#endif

/*!
    @function getBrandedAppName
    @brief Get Branded App Name (it's loaded from linqto.json or linqto.xml)
    @return Branded App Name : NSString
 */
- (NSString*) getBrandedAppName;

/*!
    
    @function logUserActivityWithUserId:withCompletion
    @brief Post User Activity log to linqto server
    @param userId : NSString , user id, completion : Completion block. void (^)(NSError* error)
    @return no return value, after posting to linqto server, completion block is called. 
            if there's no error, nil is returned in completion block.
 */
- (void) logUserActivityWithUserId:(NSString*)userId withCompletion:(void(^)(NSError* error))completion;


/*!
    @function getUserActivityWithCompletion
    @brief Get (fetch) User Activity lists from server.
    @param completion : Completion block void (^)(NSMutableArray*, NSError*)
    @return no return value, instead, completion block is called.
 */
- (void) getUserActivityWithCompletion:(void(^)(NSMutableArray<LinqtoUserActivity*> * data, NSError* error))completion;

/*
 * Get property list from local file
 * If you want to read lingqo.json, filename is "linqto", extention is 'json'.
 */
- (void) getLinqtoPropertyListWithFile:(NSString*)filename withType:(NSString*)extension copletion:(void(^)(LinqtoPropertyList* propertyList, NSError* error))completion;

/*
 * This function must be called before using SDK.
 * Example:
 * [[LinqtoService instance] setBrandID:@"brandId" withBaseURL:@"http://base.url"];
 */
//- (void) setBrandID:(NSString*)brandId withBaseURL:(NSString*)baseURL;

/*
 * Write user activity to server.
 */
//- (void) postUserActivityWithDeviceID:(NSString*)deviceId withUserID:(NSString*)userId completion:(void(^)(NSMutableDictionary* data, NSError* error))completion;

//- (void) postUserActivityWithParams:(NSDictionary*)params completion:(void(^)(NSMutableDictionary* data, NSError* error))completion;


@end
