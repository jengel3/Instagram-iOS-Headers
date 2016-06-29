
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol IGGridViewHeaderLabelDelegate;
@class UILabel, IGTapButton, UITapGestureRecognizer;

@interface IGGridViewHeaderLabel : UICollectionReusableView {

	id<IGGridViewHeaderLabelDelegate> _delegate;
	UILabel* _label;
	IGTapButton* _editButton;
	UITapGestureRecognizer* _editTap;

}

@property (nonatomic,retain) UILabel * label;                                                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) IGTapButton * editButton;                                       //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * editTap;                               //@synthesize editTap=_editTap - In the implementation block
@property (assign,nonatomic,__weak) id<IGGridViewHeaderLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)height;
-(void)setShowsEditLabel:(char)arg1 ;
-(void)didTapEdit;
-(UITapGestureRecognizer *)editTap;
-(void)setEditTap:(UITapGestureRecognizer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGGridViewHeaderLabelDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGGridViewHeaderLabelDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setEditButton:(IGTapButton *)arg1 ;
-(IGTapButton *)editButton;
@end

