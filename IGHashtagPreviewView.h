/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:30 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, IGThumbnailsGridView;

@interface IGHashtagPreviewView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGThumbnailsGridView* _thumbnailView;

}

@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGThumbnailsGridView * thumbnailView;              //@synthesize thumbnailView=_thumbnailView - In the implementation block
-(void)setMediaCount:(id)arg1 ;
-(void)setThumbnailURLs:(id)arg1 ;
-(id)numberFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setThumbnailView:(IGThumbnailsGridView *)arg1 ;
-(IGThumbnailsGridView *)thumbnailView;
@end
