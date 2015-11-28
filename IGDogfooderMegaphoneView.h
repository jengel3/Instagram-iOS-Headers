
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGenericMegaphoneView.h>

@class NSString;

@interface IGDogfooderMegaphoneView : IGGenericMegaphoneView {

	char _megaphoneSeen;
	NSString* _source;

}

@property (nonatomic,copy) NSString * source;                 //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;              //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
-(void)logMegaphoneSeen;
-(id)initWithFrame:(CGRect)arg1 fromDisplaySource:(id)arg2 withMegaphone:(id)arg3 ;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(id)newSideImage;
-(float)additionalSideImageTopPadding;
-(void)didDismiss;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(id)cacheKey;
-(void)logEvent:(id)arg1 ;
@end

