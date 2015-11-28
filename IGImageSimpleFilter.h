
#import <Instagram/IGImageFilter.h>

@class NSString;

@interface IGImageSimpleFilter : IGImageFilter {

	NSString* _shader;

}
-(id)initWithFragmentShader:(id)arg1 ;
-(id)fragmentShader;
-(id)init;
@end

