

@interface IGDKMoveIndex : NSObject {

	unsigned _from;
	unsigned _to;

}

@property (nonatomic,readonly) unsigned from;              //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) unsigned to;                //@synthesize to=_to - In the implementation block
-(id)initWithFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(unsigned)from;
-(unsigned)to;
@end

