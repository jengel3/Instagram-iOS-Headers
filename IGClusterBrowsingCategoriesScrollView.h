
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
-(void)loadCategoriesViewWithCatetories:(id)arg1 ;
-(void)setCategoriesView:(IGClusterBrowsingCategoriesButtonsView *)arg1 ;
-(UILabel *)descriptionLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

