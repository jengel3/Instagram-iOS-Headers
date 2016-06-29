

@interface IGTargetBlock : NSObject {

	id _block;

}
-(void)invoke:(id)arg1 ;
-(id)initWithBlock:(id)arg1 ;
-(void)invoke;
@end

