
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>
#import <Instagram/IGImageViewDelegate.h>

@class UIView, UIImageView, NSString;

@interface IGMediaThumbnailView : IGImageView <IGImageViewDelegate> {

	UIView* _playGlyphView;
	UIImageView* _playGlyphImageView;
	char _showPlayGlyph;
	char _pendingShowPlayGlyph;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showPlayGlyph:(char)arg1 ;
-(CGRect)playGlyphFrame;
-(void)notifyDelegateOfSuccess;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

