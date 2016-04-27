
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFadingImageView.h>
#import <Instagram/IGImageViewDelegate.h>

@class UIView, UIImageView, NSString;

@interface IGMediaThumbnailView : IGFadingImageView <IGImageViewDelegate> {

	UIView* _playGlyphView;
	UIImageView* _playGlyphImageView;
	char _showPlayGlyph;
	char _pendingShowPlayGlyph;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)notifyDelegateOfSuccess;
-(void)showPlayGlyph:(char)arg1 ;
-(CGRect)playGlyphFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

