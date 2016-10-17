//
//  LinqtoConstants.h
//  Linqto
//
//  Created by Wontai Ki on 7/31/16.
//  Copyright © 2016 Wontai Ki. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef Constants_h
#define Constants_h

#define SDK_VERSION 0.0.1

#define LINQTO_DEBUG 1

#define ERROR_SERVICE_INIT 601
#define ERROR_SERVICE_NO_DEVICEID 602
#define ERROR_SERVICE_NO_USERID 603
#define ERROR_SERVICE_INVALID_RETURN 604
#define ERROR_SERVICE_UNSUPPORTED_TYPE 605
#define ERROR_SERVICE_ALREADYLOG_TODAY 606

extern NSString* ERROR_DOMAIN_SERVICE;

extern NSString* ERROR_DESCRIPTION_INIT;
extern NSString* ERROR_DESCRIPTION_NO_DEVICEID;
extern NSString* ERROR_DESCRIPTION_NO_USERID;
extern NSString* ERROR_DESCRIPTION_INVALID_RETURN;
extern NSString* ERROR_DESCRIPTION_UNSUPPORTED_TYPE;
extern NSString* ERROR_DESCRIPTION_ALREADYLOG_TODAY;

extern NSString* KEY_LINQTO_KEYLIST;

extern NSString* KEY_BRAND_ID;
extern NSString* KEY_FINAME;
extern NSString* KEY_ENDPOINT_URL;

#endif /* Constants_h */
