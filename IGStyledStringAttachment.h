

#import <Instagram/Instagram-Structs.h>
@class UIImage, NSAttributedString, NSDictionary;

@interface IGStyledStringAttachment : NSObject {

	CTRunDelegateRef delegate;
	UIImage* _image;
	float _leftBearing;
	float _rightBearing;
	NSAttributedString* _attributedString;
	NSDictionary* _imageAttributes;
	CGRect _bounds;

}

@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,retain) NSDictionary * imageAttributes;                     //@synthesize imageAttributes=_imageAttributes - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,retain) UIImage * image;                                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) float leftBearing;                                  //@synthesize leftBearing=_leftBearing - In the implementation block
@property (assign,nonatomic) float rightBearing;                                 //@synthesize rightBearing=_rightBearing - In the implementation block
-(void)setRightBearing:(float)arg1 ;
-(void)setLeftBearing:(float)arg1 ;
-(float)leftBearing;
-(float)rightBearing;
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

