

@interface IGFilterResource : NSObject {

	id _filter;
	id _resource;

}

@property (assign,nonatomic,__weak) id filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) id resource;                   //@synthesize resource=_resource - In the implementation block
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(void)setResource:(id)arg1 ;
-(id)resource;
@end

