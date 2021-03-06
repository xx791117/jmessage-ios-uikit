//
//  JMUIConversationViewController.h
//  JMUIKit
//
//  Created by oshumini on 15/12/28.
//  Copyright © 2015年 HXHG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMUIInputToolbar.h"
#import "JMUIMoreView.h"
#import "JMUIInputView.h"
#import <JMessage/JMessage.h>
//#import "XHVoiceRecordHUD.h"
//#import "XHVoiceRecordHelper.h"
#import <JMUICommon/XHVoiceRecordHelper.h>
#import <JMUICommon/XHVoiceRecordHUD.h>

@interface JMUIConversationViewController : UIViewController<
UITableViewDataSource,
UITableViewDelegate,
JMUIToolBarDelegate,
JMUIMoreViewDelegate,
JMessageDelegate
>

@property (strong, nonatomic)JMSGConversation *conversation;
@property (strong, nonatomic)JMUIInputView *inputView;
@property (strong, nonatomic)UITableView *messageListTable;

/**
 *  管理录音工具对象
 */
@property(nonatomic, strong) XHVoiceRecordHelper *voiceRecordHelper;
@property(nonatomic, strong, readwrite) XHVoiceRecordHUD *voiceRecordHUD;

@end
