/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGClusterBrowsingCategoriesButtonsView, UIImageView, UILabel;

@interface IGClusterBrowsingCategoriesScrollView : UIScrollView {

	IGClusterBrowsingCategoriesButtonsView* _categoriesView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) IGClusterBrowsingCategoriesButtonsView * categoriesView;              //@synthesize categoriesView=_categoriesView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                               //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                           //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(IGClusterBrowsingCategoriesButtonsView *)categoriesView;
-(void)setCategoriesView:(IGClusterBrowsingCategoriesButtonsView *)arg1 ;
-(void)loadCategoriesViewWithCatetories:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

