

@interface IGHScrollActionCardModel : NSObject {

	int _position;

}

@property (nonatomic,readonly) int position;              //@synthesize position=_position - In the implementation block
-(id)initWithPosition:(int)arg1 ;
-(int)position;
@end

