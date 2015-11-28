
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGEventViewerHeaderViewDelegate;
@class UIButton, UILabel;

@interface IGEventViewerHeaderView : UIView {

	id<IGEventViewerHeaderViewDelegate> _delegate;
	UIButton* _closeButton;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (assign,nonatomic,__weak) id<IGEventViewerHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIButton * closeButton;                                  //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(void)didTapCloseButton:(id)arg1 ;
-(id)subtitleAttributes;
-(id)textKerning;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGEventViewerHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id<IGEventViewerHeaderViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitle:(id)arg1 ;
-(void)setupSubviews;
-(id)titleAttributes;
-(id)paragraphStyle;
-(UIButton *)closeButton;
@end

