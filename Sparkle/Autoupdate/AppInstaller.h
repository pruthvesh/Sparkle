//
//  AppInstaller.h
//  Sparkle
//
//  Created by Mayur Pawashe on 3/7/16.
//  Copyright © 2016 Sparkle Project. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SUUnarchiverProtocol.h"

@interface AppInstaller : NSObject <SUUnarchiverDelegate>

- (instancetype)initWithHostBundleIdentifier:(NSString *)hostBundleIdentifier allowingInteraction:(BOOL)allowsInteraction;

- (void)start;

- (void)cleanupAndExitWithStatus:(int)status __attribute__((noreturn));

@end