

@class NSString;

@interface FBPremiumVideoAdSRTCaption : NSObject {

	NSString* _caption;
	double _from;
	double _to;

}

@property (nonatomic,readonly) double from;                          //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) double to;                            //@synthesize to=_to - In the implementation block
@property (nonatomic,copy,readonly) NSString * caption;              //@synthesize caption=_caption - In the implementation block
-(id)initWithCaption:(id)arg1 from:(double)arg2 to:(double)arg3 ;
-(NSString *)caption;
-(double)from;
-(double)to;
@end

