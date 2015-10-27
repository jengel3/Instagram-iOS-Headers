/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentCell.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGDirectContentCellDelegate;
@class IGCoreTextView, NSString;

@interface IGDirectCommentCell : IGDirectContentCell <IGCoreTextLinkHandler> {

	id<IGDirectContentCellDelegate> _delegate;
	IGCoreTextView* _commentTextView;

}

@property (nonatomic,retain) IGCoreTextView * commentTextView;              //@synthesize commentTextView=_commentTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emojiCommentStyle;
+(id)commentStyle;
+(float)commentWidthForFrameWidth:(float)arg1 ;
+(float)heightForCellWithCommentText:(id)arg1 forWidth:(float)arg2 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGCoreTextView *)commentTextView;
-(float)loadingIndicatorOffset;
-(CGRect)tapTargetFrame;
-(void)setCommentTextView:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)prepareForReuse;
-(void)setContent:(id)arg1 ;
-(id)defaultTextColor;
@end

