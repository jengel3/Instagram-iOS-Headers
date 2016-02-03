/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBSDKWebDialogDelegate.h>

@protocol FBSDKAppGroupJoinDialogDelegate;
@class FBSDKWebDialog, NSString;

@interface FBSDKAppGroupJoinDialog : NSObject <FBSDKWebDialogDelegate> {

	FBSDKWebDialog* _webDialog;
	id<FBSDKAppGroupJoinDialogDelegate> _delegate;
	NSString* _groupID;

}

@property (assign,nonatomic,__weak) id<FBSDKAppGroupJoinDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                 //@synthesize groupID=_groupID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithGroupID:(id)arg1 delegate:(id)arg2 ;
-(char)canShow;
-(void)webDialogDidCancel:(id)arg1 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(char)validateWithError:(id*)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(char)show;
-(void)setDelegate:(id<FBSDKAppGroupJoinDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSDKAppGroupJoinDialogDelegate>)delegate;
@end
