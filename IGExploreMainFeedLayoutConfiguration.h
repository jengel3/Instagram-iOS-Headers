

@interface IGExploreMainFeedLayoutConfiguration : NSObject {

	float _interItemSpacing;
	float _mediasPerRow;

}

@property (nonatomic,readonly) float interItemSpacing;              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) float mediasPerRow;                  //@synthesize mediasPerRow=_mediasPerRow - In the implementation block
-(float)mediasPerRow;
-(id)initWithInterItemSpacing:(float)arg1 mediasPerRow:(float)arg2 ;
-(float)interItemSpacing;
-(id)init;
@end

