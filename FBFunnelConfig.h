

@interface FBFunnelConfig : NSObject {

	char _shouldEndOnBackgrounding;
	char _enableFunnelPseudoEnding;
	double _timeout;

}

@property (nonatomic,readonly) char shouldEndOnBackgrounding;              //@synthesize shouldEndOnBackgrounding=_shouldEndOnBackgrounding - In the implementation block
@property (nonatomic,readonly) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) char enableFunnelPseudoEnding;              //@synthesize enableFunnelPseudoEnding=_enableFunnelPseudoEnding - In the implementation block
-(id)initWithShouldEndOnBackgrounding:(char)arg1 timeout:(double)arg2 ;
-(id)initWithShouldEndOnBackgrounding:(char)arg1 timeout:(double)arg2 enableFunnelPseudoEnding:(char)arg3 ;
-(char)shouldEndOnBackgrounding;
-(char)enableFunnelPseudoEnding;
-(double)timeout;
@end

