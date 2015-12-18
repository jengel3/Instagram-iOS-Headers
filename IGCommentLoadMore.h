

@interface IGCommentLoadMore : NSObject {

	char _loading;

}

@property (assign,getter=isLoading,nonatomic) char loading;              //@synthesize loading=_loading - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

