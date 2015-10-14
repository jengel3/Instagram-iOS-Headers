/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:54 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGDirectPendingRequestButtonDelegate;
@class NSString;

@interface IGDirectPendingRequestButtons : UIView {

	id<IGDirectPendingRequestButtonDelegate> _delegate;
	NSString* _pendingRequestString;

}

@property (assign,nonatomic,__weak) id<IGDirectPendingRequestButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pendingRequestString;                                         //@synthesize pendingRequestString=_pendingRequestString - In the implementation block
+(id)explanationFont;
+(float)heightForString:(id)arg1 andWidth:(float)arg2 ;
-(void)didTapAcceptButton;
-(void)didTapDenyButton;
-(id)initWithFrame:(CGRect)arg1 andString:(id)arg2 ;
-(NSString *)pendingRequestString;
-(void)setPendingRequestString:(NSString *)arg1 ;
-(void)setDelegate:(id<IGDirectPendingRequestButtonDelegate>)arg1 ;
-(id<IGDirectPendingRequestButtonDelegate>)delegate;
@end

