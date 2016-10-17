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

@interface LinqtoService : NSObject

// will be removed in the future
@property (strong, nonatomic, readonly) LinqtoPropertyList* linqtoJSONPropertyList;
@property (strong, nonatomic, readonly) LinqtoPropertyList* linqtoXMLPropertyList;

+ (LinqtoService*) instance;

/*
 * Get All Keys in PropertyLists
 */
- (NSArray*) allPropertyKeys;

//#ifdef LINQTO_DEBUG
// Temporal method, these methods will be removed in production.
- (NSArray*) allJSONPropertyKeys;
- (NSArray*) allXMLPropertyKeys;
//#endif

/*
 * Get Device Id : returns UUID
 */
- (NSString*) getDeviceId;

/*
 * Get Property value for key
 */
- (NSString*) getProperty:(NSString*)key;

#ifdef LINQTO_DEBUG
// Temporal method, these methods will be removed in production.
- (LinqtoProperty*) getJSONProperty:(NSString *)key;
- (LinqtoProperty*) getXMLProperty:(NSString *)key;
#endif

/*
 * Get Branded App Name (it's loaded from linqto.json or linqto.xml
 */
- (NSString*) getBrandedAppName;

/*
 * Post User Activity log to linqto server
 */
- (void) logUserActivityWithUserId:(NSString*)userId withCompletion:(void(^)(NSError* error))completion;


/*
 * Get (fetch) User Activity lists from server.
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
