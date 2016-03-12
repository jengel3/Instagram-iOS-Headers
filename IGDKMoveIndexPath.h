

@class NSIndexPath;

@interface IGDKMoveIndexPath : NSObject {

	NSIndexPath* _from;
	NSIndexPath* _to;

}

@property (nonatomic,readonly) NSIndexPath * from;              //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) NSIndexPath * to;                //@synthesize to=_to - In the implementation block
-(id)initWithFrom:(id)arg1 to:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSIndexPath *)from;
-(NSIndexPath *)to;
@end

