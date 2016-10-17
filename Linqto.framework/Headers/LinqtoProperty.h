//
//  LinqtoProperty.h
//  Linqto
//
//  Created by KiWontai on 8/17/16.
//  Copyright © 2016 Wontai Ki. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LinqtoProperty : NSObject <NSCoding>

@property (strong, nonatomic, readonly) NSString* key;
@property (strong, nonatomic, readonly) NSString* value;
@property (strong, nonatomic, readonly) NSString* label;
@property (strong, nonatomic, readonly) NSString* descriptionText;

- (instancetype) initWithData:(NSDictionary*)dataDictionary;

- (instancetype) initWithCoder:(NSCoder *)aDecoder;

- (void) encodeWithCoder:(NSCoder *)aCoder;


@end
