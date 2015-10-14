/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
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

