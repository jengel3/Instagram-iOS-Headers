/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:58 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>

@class IGPost, IGFeedPhotoView;

@interface IGFeedItemPhotoCell : IGFeedItemMediaCell {

	IGPost* _post;
	IGFeedPhotoView* _photoView;

}

@property (nonatomic,retain) IGFeedPhotoView * photoView;              //@synthesize photoView=_photoView - In the implementation block
-(id)accessibleElements;
-(IGFeedPhotoView *)photoView;
-(void)setPhotoView:(IGFeedPhotoView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)post;
-(void)setPost:(id)arg1 ;
@end

