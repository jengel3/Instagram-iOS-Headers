

#import <Instagram/Instagram-Structs.h>
@interface QuadtreePoint : NSObject {

	char _hasPointInView;
	id _item;
	id _currentClusterItem;
	double _latitude;
	double _longitude;
	double _value;
	CGPoint _pointInView;

}

@property (assign,nonatomic) double latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) id item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) id currentClusterItem;              //@synthesize currentClusterItem=_currentClusterItem - In the implementation block
@property (assign,nonatomic) double value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) CGPoint pointInView;                //@synthesize pointInView=_pointInView - In the implementation block
@property (assign,nonatomic) char hasPointInView;                //@synthesize hasPointInView=_hasPointInView - In the implementation block
-(char)isEqualToPoint:(id)arg1 ;
-(id)initWithLatitudeLongitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithItem:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
-(id)initWithItemAndValue:(id)arg1 value:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 ;
-(id)currentClusterItem;
-(void)setCurrentClusterItem:(id)arg1 ;
-(char)isItemEqualToPoint:(id)arg1 ;
-(char)isMoreNorthwestern:(id)arg1 ;
-(char)isMoreSoutheastern:(id)arg1 ;
-(id)divide:(double)arg1 ;
-(CGPoint)pointInView;
-(void)setPointInView:(CGPoint)arg1 ;
-(char)hasPointInView;
-(void)setHasPointInView:(char)arg1 ;
-(SCD_Struct_IG36)coordinate;
-(double)latitude;
-(double)longitude;
-(char)isEqual:(id)arg1 ;
-(id)copy;
-(id)item;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
@end

