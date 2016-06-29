

@interface IGCollectionViewLayoutApplier : NSObject {

	char _didApply;
	/*^block*/id _applyLayoutBlock;

}

@property (nonatomic,copy) id applyLayoutBlock;              //@synthesize applyLayoutBlock=_applyLayoutBlock - In the implementation block
@property (assign,nonatomic) char didApply;                  //@synthesize didApply=_didApply - In the implementation block
-(void)applyChangedLayoutState;
-(id)applyLayoutBlock;
-(void)setApplyLayoutBlock:(id)arg1 ;
-(char)didApply;
-(void)setDidApply:(char)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

