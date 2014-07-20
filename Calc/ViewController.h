//
//  ViewController.h
//  Calc
//
//  Created by Zach Waterfield on 2014-07-08.
//
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *calculatorDisplay;
@property (nonatomic) BOOL typingNumber;
@property (nonatomic) int firstNumber;
@property (nonatomic) int secondNumber;
@property (nonatomic, copy) NSString *operation;


- (IBAction)numberPressed:(UIButton *)sender;
- (IBAction)calculationPressed:(id)sender;
- (IBAction)allClear:(id)sender;
- (IBAction)equalsPressed;

@end
