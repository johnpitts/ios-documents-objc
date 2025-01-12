//
//  LSIDocument.h
//  DocumentsObjC1Wed
//
//  Created by John Pitts on 7/17/19.
//  Copyright © 2019 johnpitts. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIDocument : NSObject

@property NSString *title;
@property NSString *body;
@property int *numberOfWords;

- (instancetype)initWithTitle:(NSString *)title
                         body:(NSString *)body
                numberOfWords:(int *)numberOfWords;

@end

NS_ASSUME_NONNULL_END
