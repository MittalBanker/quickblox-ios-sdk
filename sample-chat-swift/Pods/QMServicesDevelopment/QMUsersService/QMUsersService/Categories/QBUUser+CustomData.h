//
//  QBUUser+CustomData.h
//  QMServices
//
//  Created by Andrey Ivanov on 27.04.15.
//  Copyright (c) 2015 Quickblox Team. All rights reserved.
//

#import <Quickblox/Quickblox.h>

/**
 *  QBUUser+QMAssociatedObject class interface.
 *  Used to store and synchronize custom data of QBUUser.
 */
@interface QBUUser (QMAssociatedObject)

/**
 *  User custom data context, based on dictionary.
 *
 *  @discussion Add or remove data, that you need to put into customData field of user.
 *  You should always call 'synchronize' method after context change.
 */
@property (strong, nonatomic, readonly, QB_NONNULL) NSMutableDictionary *context;

/**
 *  Synchronize context into user custom data field.
 *
 *  @discussion Call this method after every context update.
 *  This will convert NSDIctionary into JSON and put into QBUUser customData field.
 */
- (void)synchronize;

@end

@interface QBUUser (CustomData)

@property (strong, nonatomic, QB_NULLABLE) NSString *avatarUrl;
@property (strong, nonatomic, QB_NULLABLE) NSString *status;
@property (assign, nonatomic) BOOL isImport;

@end
