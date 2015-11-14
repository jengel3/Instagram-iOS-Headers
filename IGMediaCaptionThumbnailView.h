/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:00 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>
#import <Instagram/IGImageViewDelegate.h>

@class UIView, UIImageView, NSString;

@interface IGMediaCaptionThumbnailView : IGImageView <IGImageViewDelegate> {

	UIView* _playGlyphView;
	UIImageView* _playGlyphImageView;
	char _showPlayGlyph;
	char _pendingShowPlayGlyph;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showPlayGlyph:(char)arg1 ;
-(void)notifyDelegateOfSuccess;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

