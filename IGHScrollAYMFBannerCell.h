
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGHScrollAYMFBannerCellDelegate;
@class UILabel, UIButton;

@interface IGHScrollAYMFBannerCell : UICollectionViewCell {

	id<IGHScrollAYMFBannerCellDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _actionButton;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                        //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGHScrollAYMFBannerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setUpViews;
-(void)didTapActionButton;
-(void)configureWithTitle:(id)arg1 actionLabel:(id)arg2 ;
-(UIButton *)actionButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGHScrollAYMFBannerCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGHScrollAYMFBannerCellDelegate>)delegate;
-(UILabel *)titleLabel;
@end

