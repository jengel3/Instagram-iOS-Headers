

@class UIImage, NSString;

@interface IGCameraNavigationShareModeSelectorItem : NSObject {

	char _showGlyphInTitleBar;
	UIImage* _glpyh;
	NSString* _title;

}

@property (nonatomic,readonly) UIImage * glpyh;                       //@synthesize glpyh=_glpyh - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char showGlyphInTitleBar;              //@synthesize showGlyphInTitleBar=_showGlyphInTitleBar - In the implementation block
-(UIImage *)glpyh;
-(char)showGlyphInTitleBar;
-(id)initWithGlyph:(id)arg1 title:(id)arg2 showGlyphInTitleBar:(char)arg3 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)title;
@end

