//
//  LinqtoUserActivity.h
//  Linqto
//
//  Created by KiWontai on 8/3/16.
//  Copyright © 2016 Wontai Ki. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * This class is for handle user activity data
 */

@interface LinqtoUserActivity : NSObject

@property (strong, nonatomic, readonly) NSString* brandId;
@property (strong, nonatomic, readonly) NSString* deviceId;
@property (strong, nonatomic, readonly) NSString* userId;
@property (strong, nonatomic, readonly) NSString* lastDateString;
@property (strong, nonatomic, readonly) NSDate* lastAccessDate;

/*
 * Initialize LinqtoUserActivity from data dictionary from server
 * Sample:
    {
        "brandId": 19
        "deviceId": "9487ryiunvdslkvjsdohfihe98wjep9jeg08dshvojkl"
        "userId": "erik@linqto.com"
        "lastAccess": "2016-07-28 18:07:00.0"
 }
 */
- (instancetype) initWithData:(NSDictionary*)dataDictionary;

@end
