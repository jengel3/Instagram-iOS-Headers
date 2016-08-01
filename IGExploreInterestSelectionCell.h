
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGExploreInterestButtonsViewDelegate.h>

@protocol IGExploreInterestSelectionCellDelegate;
@class UIButton, UILabel, IGExploreInterestButtonsView, NSString;

@interface IGExploreInterestSelectionCell : UICollectionViewCell <IGExploreInterestButtonsViewDelegate> {

	id<IGExploreInterestSelectionCellDelegate> _delegate;
	UIButton* _doneButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	IGExploreInterestButtonsView* _topicsButtonView;
	UIButton* _seeMoreButton;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) IGExploreInterestButtonsView * topicsButtonView;                         //@synthesize topicsButtonView=_topicsButtonView - In the implementation block
@property (nonatomic,readonly) UIButton * seeMoreButton;                                              //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGExploreInterestSelectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                                                 //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)buttonInsetForActionButton;
+(id)titleLabelAttributes;
+(id)subtitleLabelAttributes;
+(float)cellHeightForModel:(id)arg1 width:(float)arg2 ;
-(void)setupTitles;
-(void)setupSeeMoreButton;
-(void)setupDoneButton;
-(void)didTapSeeMoreButton;
-(void)didTapDoneButton;
-(void)layoutTitleLabelWithConstrainedRectSize:(CGSize)arg1 ;
-(void)layoutSubtitleLabelWithConstrainedRectSize:(CGSize)arg1 ;
-(void)layoutTopicButtonViewWithConstrainedRectSize:(CGSize)arg1 ;
-(void)layoutSeeMoreAndDoneButton;
-(IGExploreInterestButtonsView *)topicsButtonView;
-(void)exploreInterestButtonsView:(id)arg1 didTapButton:(id)arg2 withIndex:(int)arg3 ;
-(void)configureCellWithModel:(id)arg1 ;
-(void)setTopicsButtonView:(IGExploreInterestButtonsView *)arg1 ;
-(UIButton *)seeMoreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGExploreInterestSelectionCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGExploreInterestSelectionCellDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(UIButton *)doneButton;
@end

