

@class NSMutableArray, IGContext, IGFilter;

@interface IGRenderer : NSObject {

	NSMutableArray* _outputs;
	IGContext* _context;
	IGFilter* _filter;

}

@property (nonatomic,readonly) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IGFilter * filter;                  //@synthesize filter=_filter - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 ;
-(id)renderByConsumingSource:(id)arg1 ;
-(void)renderTo:(id)arg1 ;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(IGFilter *)filter;
-(void)render:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(IGContext *)context;
-(void)setFilter:(IGFilter *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)render;
@end

