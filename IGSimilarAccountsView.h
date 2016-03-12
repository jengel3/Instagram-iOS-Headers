
#import <UIKit/UITableView.h>

@protocol IGSimilarAccountsViewDelegate;
@class NSObject, UIButton, UIView, UILabel;

@interface IGSimilarAccountsView : UITableView {

	char _isChainingSeeAllButtonEnabled;
	NSObject*<IGSimilarAccountsViewDelegate> _similarAccountsViewDelegate;
	UIButton* _closeButton;
	UIView* _topHeaderInnerView;
	UIView* _topHeaderView;
	UILabel* _titleLabel;
	UIView* _triangleView;
	UIButton* _seeAllButton;

}

@property (assign,nonatomic,__weak) NSObject*<IGSimilarAccountsViewDelegate> similarAccountsViewDelegate;              //@synthesize similarAccountsViewDelegate=_similarAccountsViewDelegate - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                                   //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIView * topHeaderInnerView;                                                              //@synthesize topHeaderInnerView=_topHeaderInnerView - In the implementation block
@property (nonatomic,retain) UIView * topHeaderView;                                                                   //@synthesize topHeaderView=_topHeaderView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * triangleView;                                                                    //@synthesize triangleView=_triangleView - In the implementation block
@property (nonatomic,retain) UIButton * seeAllButton;                                                                  //@synthesize seeAllButton=_seeAllButton - In the implementation block
@property (nonatomic,readonly) char isChainingSeeAllButtonEnabled;                                                     //@synthesize isChainingSeeAllButtonEnabled=_isChainingSeeAllButtonEnabled - In the implementation block
+(int)defaultHeight;
-(void)onCloseTapped:(id)arg1 ;
-(UIView *)topHeaderView;
-(UIView *)topHeaderInnerView;
-(UIView *)triangleView;
-(char)isChainingSeeAllButtonEnabled;
-(UIButton *)seeAllButton;
-(void)onSeeAllButtonTapped:(id)arg1 ;
-(NSObject*<IGSimilarAccountsViewDelegate>)similarAccountsViewDelegate;
-(void)setTriangleViewCenterOffsetX:(float)arg1 ;
-(void)setSimilarAccountsViewDelegate:(NSObject*<IGSimilarAccountsViewDelegate>)arg1 ;
-(void)setTopHeaderInnerView:(UIView *)arg1 ;
-(void)setTopHeaderView:(UIView *)arg1 ;
-(void)setTriangleView:(UIView *)arg1 ;
-(void)setSeeAllButton:(UIButton *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
@end

