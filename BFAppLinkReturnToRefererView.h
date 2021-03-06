
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol BFAppLinkReturnToRefererViewDelegate;
@class UIColor, BFAppLink, UILabel, UIButton, UITapGestureRecognizer;

@interface BFAppLinkReturnToRefererView : UIView {

	char _explicitlyHidden;
	char _closed;
	id<BFAppLinkReturnToRefererViewDelegate> _delegate;
	UIColor* _textColor;
	BFAppLink* _refererAppLink;
	unsigned _includeStatusBarInSize;
	UILabel* _labelView;
	UIButton* _closeButton;
	UITapGestureRecognizer* _insideTapGestureRecognizer;

}

@property (nonatomic,retain) UILabel * labelView;                                                   //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * insideTapGestureRecognizer;                   //@synthesize insideTapGestureRecognizer=_insideTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<BFAppLinkReturnToRefererViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                   //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) BFAppLink * refererAppLink;                                            //@synthesize refererAppLink=_refererAppLink - In the implementation block
@property (assign,nonatomic) unsigned includeStatusBarInSize;                                       //@synthesize includeStatusBarInSize=_includeStatusBarInSize - In the implementation block
@property (assign,nonatomic) char closed;                                                           //@synthesize closed=_closed - In the implementation block
-(void)setIncludeStatusBarInSize:(unsigned)arg1 ;
-(void)setRefererAppLink:(BFAppLink *)arg1 ;
-(BFAppLink *)refererAppLink;
-(void)initViews;
-(void)closeButtonTapped:(id)arg1 ;
-(void)onTapInside:(id)arg1 ;
-(void)updateColors;
-(char)hasRefererData;
-(void)updateHidden;
-(id)localizedLabelForReferer:(id)arg1 ;
-(id)drawCloseButtonImageWithColor:(id)arg1 ;
-(unsigned)includeStatusBarInSize;
-(UITapGestureRecognizer *)insideTapGestureRecognizer;
-(void)setInsideTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<BFAppLinkReturnToRefererViewDelegate>)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<BFAppLinkReturnToRefererViewDelegate>)delegate;
-(float)statusBarHeight;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(void)commonInit;
-(void)updateLabelText;
-(void)setLabelView:(UILabel *)arg1 ;
-(void)setClosed:(char)arg1 ;
-(char)closed;
-(UIButton *)closeButton;
-(UILabel *)labelView;
@end

