
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol IGGridViewHeaderLabelDelegate;
@class UILabel, IGTapButton;

@interface IGGridViewHeaderLabel : UICollectionReusableView {

	id<IGGridViewHeaderLabelDelegate> _delegate;
	UILabel* _label;
	IGTapButton* _secondaryButton;

}

@property (nonatomic,retain) UILabel * label;                                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) IGTapButton * secondaryButton;                                  //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGGridViewHeaderLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)height;
-(void)setShowsSecondaryLabel:(char)arg1 ;
-(void)didTapMore;
-(IGTapButton *)secondaryButton;
-(void)setSecondaryButton:(IGTapButton *)arg1 ;
-(void)setSecondaryText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGGridViewHeaderLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGridViewHeaderLabelDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

