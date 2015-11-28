
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, IGSimpleButton, IGVideoGlyphView, IGAudioIndicatorButton;

@interface IGVideoIndicatorView : UIView {

	UIView* _glyphView;
	IGSimpleButton* _playGlyph;
	IGSimpleButton* _pauseGlyph;
	IGSimpleButton* _errorGlyph;
	IGVideoGlyphView* _videoGlyph;
	int _indicatorState;
	IGAudioIndicatorButton* _audioButton;

}

@property (assign,nonatomic) int indicatorState;                                //@synthesize indicatorState=_indicatorState - In the implementation block
@property (nonatomic,retain) IGAudioIndicatorButton * audioButton;              //@synthesize audioButton=_audioButton - In the implementation block
-(void)showGlyph:(char)arg1 animated:(char)arg2 duration:(float)arg3 delay:(float)arg4 completion:(/*^block*/id)arg5 ;
-(void)setIndicatorState:(int)arg1 ;
-(id)accessibilityButtons;
-(int)indicatorState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(IGAudioIndicatorButton *)audioButton;
-(void)setAudioButton:(IGAudioIndicatorButton *)arg1 ;
@end

