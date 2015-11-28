
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class FBLikeActionController, FBLikeBoxView, FBLikeButton, UIView, UILabel, UIColor, NSString;

@interface FBLikeControl : UIControl {

	FBLikeActionController* _likeActionController;
	FBLikeBoxView* _likeBoxView;
	FBLikeButton* _likeButton;
	UIView* _likeButtonContainer;
	UILabel* _socialSentenceLabel;
	char _soundEnabled;
	UIColor* _foregroundColor;
	unsigned _likeControlAuxiliaryPosition;
	unsigned _likeControlHorizontalAlignment;
	unsigned _likeControlStyle;
	NSString* _objectID;
	float _preferredMaxLayoutWidth;

}

@property (nonatomic,retain) UIColor * foregroundColor;                            //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) unsigned likeControlAuxiliaryPosition;                //@synthesize likeControlAuxiliaryPosition=_likeControlAuxiliaryPosition - In the implementation block
@property (assign,nonatomic) unsigned likeControlHorizontalAlignment;              //@synthesize likeControlHorizontalAlignment=_likeControlHorizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned likeControlStyle;                            //@synthesize likeControlStyle=_likeControlStyle - In the implementation block
@property (nonatomic,copy) NSString * objectID;                                    //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) float preferredMaxLayoutWidth;                        //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,getter=isSoundEnabled,nonatomic) char soundEnabled;              //@synthesize soundEnabled=_soundEnabled - In the implementation block
+(char)dialogIsAvailable;
-(void)_initializeContent;
-(void)_handleLikeButtonTap:(id)arg1 ;
-(void)_updateLikeBoxCaretPosition;
-(void)_resetLikeActionController;
-(id)_analyticsParameters;
-(FBLikeControlLayout)_layoutWithBounds:(CGRect)arg1 subviewSizingBlock:(/*^block*/id)arg2 ;
-(id)_auxiliaryView;
-(unsigned)likeControlAuxiliaryPosition;
-(unsigned)likeControlHorizontalAlignment;
-(char)isSoundEnabled;
-(unsigned)likeControlStyle;
-(void)_handleLikeButtonTouchUp:(id)arg1 ;
-(void)setSoundEnabled:(char)arg1 ;
-(void)_handleLikeButtonTouchDown:(id)arg1 ;
-(void)_likeActionControllerDidResetNotification:(id)arg1 ;
-(void)_handleLikeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_handleLikeActionControllerDidUpdateNotification:(id)arg1 ;
-(float)_auxiliaryViewPadding;
-(void)setLikeControlAuxiliaryPosition:(unsigned)arg1 ;
-(void)setLikeControlHorizontalAlignment:(unsigned)arg1 ;
-(void)setLikeControlStyle:(unsigned)arg1 ;
-(NSString *)objectID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setObjectID:(NSString *)arg1 ;
@end

