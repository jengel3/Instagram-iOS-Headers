
#import <Instagram/RCTShadowView.h>

@class NSString;

@interface RCTShadowRawText : RCTShadowView {

	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(void)contentSizeMultiplierDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

