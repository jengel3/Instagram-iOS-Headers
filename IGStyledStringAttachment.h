

#import <Instagram/Instagram-Structs.h>
@class UIImage, NSAttributedString, NSDictionary;

@interface IGStyledStringAttachment : NSObject {

	CTRunDelegateRef delegate;
	UIImage* _image;
	NSAttributedString* _attributedString;
	NSDictionary* _imageAttributes;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSDictionary * imageAttributes;                     //@synthesize imageAttributes=_imageAttributes - In the implementation block
-(void)setImageAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)imageAttributes;
-(CGRect)bounds;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
@end

