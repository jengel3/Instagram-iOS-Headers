
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGMainFeedHeaderViewDelegate;
@class UIView, UILabel;

@interface IGMainFeedHeaderView : UIView {

	id<IGMainFeedHeaderViewDelegate> _delegate;
	UIView* _logoImageView;
	UILabel* _headerLabel;

}

@property (nonatomic,readonly) UIView * logoImageView;                                      //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,readonly) UILabel * headerLabel;                                       //@synthesize headerLabel=_headerLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setupLogoView;
-(void)setupHeaderLabel;
-(void)tapOnLabel:(id)arg1 ;
-(UIView *)logoImageView;
-(void)displayInstagramLogoWithAnimation:(char)arg1 ;
-(void)displayAttributedString:(id)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMainFeedHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGMainFeedHeaderViewDelegate>)delegate;
-(UILabel *)headerLabel;
@end

