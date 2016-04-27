

#import <Instagram/Instagram-Structs.h>
@class UIImage, UIColor, NSAttributedString, NSDictionary;

@interface IGStyledStringAttachment : NSObject {

	CTRunDelegateRef delegate;
	UIImage* _image;
	UIColor* _tintColor;
	float _leftBearing;
	float _rightBearing;
	NSAttributedString* _attributedString;
	NSDictionary* _imageAttributes;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) float leftBearing;                                  //@synthesize leftBearing=_leftBearing - In the implementation block
@property (assign,nonatomic) float rightBearing;                                 //@synthesize rightBearing=_rightBearing - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSDictionary * imageAttributes;                     //@synthesize imageAttributes=_imageAttributes - In the implementation block
-(float)leftBearing;
-(float)rightBearing;
-(void)setImageAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)imageAttributes;
-(void)setLeftBearing:(float)arg1 ;
-(void)setRightBearing:(float)arg1 ;
-(CGRect)bounds;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
@end

