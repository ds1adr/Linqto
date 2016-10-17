//
//  LinqtoPropertyList.h
//  Linqto
//
//  Created by Wontai Ki on 9/5/16.
//  Copyright © 2016 Wontai Ki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinqtoProperty.h"

@interface LinqtoPropertyList : NSObject

- (instancetype) initWithCoder:(NSCoder *)aDecoder;
- (void) encodeWithCoder:(NSCoder *)aCoder;

- (void) addLinqtoProperty:(LinqtoProperty*) property;
- (LinqtoProperty*) getLinqtoPropertyForKey:(NSString*)key;

- (NSArray*) allKeys;

@end
