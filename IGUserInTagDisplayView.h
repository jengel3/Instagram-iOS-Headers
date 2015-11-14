/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Instagram/IGUsertagViewDelegate.h>

@protocol IGUserInTagDisplayDelegate;
@class IGUsertagGroup, NSString;

@interface IGUserInTagDisplayView : UIView <IGUsertagViewDelegate> {

	IGUsertagGroup* _usertags;
	id<IGUserInTagDisplayDelegate> _delegate;

}

@property (nonatomic,retain) IGUsertagGroup * usertags;                                   //@synthesize usertags=_usertags - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserInTagDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUsertagGroup *)usertags;
-(void)setUsertags:(IGUsertagGroup *)arg1 ;
-(char)tagViewCanBeSelected:(id)arg1 ;
-(void)tagViewWasSelected:(id)arg1 ;
-(void)tagViewWasRemoved:(id)arg1 ;
-(char)hasActiveUsertag;
-(void)showAllTagsAnimated:(char)arg1 ;
-(void)hideAllTagsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onUsertagsChanged;
-(void)setDelegate:(id<IGUserInTagDisplayDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGUserInTagDisplayDelegate>)delegate;
@end

