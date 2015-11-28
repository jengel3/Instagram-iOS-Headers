
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol BFAppLinkReturnToRefererViewDelegate;
@class UIColor, BFAppLink, UILabel, UIButton, UITapGestureRecognizer, UIView;

@interface BFAppLinkReturnToRefererView : UIView {

	char _closed;
	id<BFAppLinkReturnToRefererViewDelegate> _delegate;
	UIColor* _textColor;
	BFAppLink* _refererAppLink;
	int _includeStatusBarInSize;
	UILabel* _labelView;
	UIButton* _closeButton;
	UITapGestureRecognizer* _insideTapGestureRecognizer;
	UIView* _viewToMoveWithNavController;

}

@property (assign,nonatomic,__weak) id<BFAppLinkReturnToRefererViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) BFAppLink * refererAppLink;                                            //@synthesize refererAppLink=_refererAppLink - In the implementation block
@property (assign,nonatomic) int includeStatusBarInSize;                                            //@synthesize includeStatusBarInSize=_includeStatusBarInSize - In the implementation block
@property (assign,nonatomic) char closed;                                                           //@synthesize closed=_closed - In the implementation block
@property (nonatomic,retain) UILabel * labelView;                                                   //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * insideTapGestureRecognizer;                   //@synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * viewToMoveWithNavController;                                  //@synthesize viewToMoveWithNavController=_viewToMoveWithNavController - In the implementation block
-(void)closeButtonTapped:(id)arg1 ;
-(void)setIncludeStatusBarInSize:(int)arg1 ;
-(void)setRefererAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)refererAppLink;
-(void)initViews;
-(void)onTapInside:(id)arg1 ;
-(void)updateColors;
-(char)hasRefererData;
-(id)localizedLabelForReferer:(id)arg1 ;
-(id)drawCloseButtonImageWithColor:(id)arg1 ;
-(int)includeStatusBarInSize;
-(UITapGestureRecognizer *)insideTapGestureRecognizer;
-(void)setInsideTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIView *)viewToMoveWithNavController;
-(void)setViewToMoveWithNavController:(UIView *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<BFAppLinkReturnToRefererViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<BFAppLinkReturnToRefererViewDelegate>)delegate;
-(float)statusBarHeight;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)commonInit;
-(void)updateLabelText;
-(void)setLabelView:(UILabel *)arg1 ;
-(void)setClosed:(char)arg1 ;
-(char)closed;
-(UIButton *)closeButton;
-(UILabel *)labelView;
@end

