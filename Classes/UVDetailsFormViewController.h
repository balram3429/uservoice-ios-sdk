//
//  UVDetailsFormViewController.h
//  UserVoice
//
//  Created by Austin Taylor on 10/21/13.
//  Copyright (c) 2013 UserVoice Inc. All rights reserved.
//

#import "UVBaseViewController.h"

@interface UVDetailsFormViewController : UVBaseViewController<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) NSString *sendTitle;
@property (nonatomic, retain) NSArray *fields;
@property (nonatomic, retain) UITextField *emailField;
@property (nonatomic, retain) UITextField *nameField;
@property (nonatomic, assign) id delegate;
@property (nonatomic, retain) NSMutableDictionary *selectedFieldValues;

@end