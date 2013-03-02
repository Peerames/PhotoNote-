//
//  PNAppDelegate.h
//  PhotoNote
//
//  Created by Peerames on 3/2/13.
//  Copyright (c) 2013 Peerames. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
