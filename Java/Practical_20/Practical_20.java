import javafx.application.Application;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;
import javafx.scene.layout.BorderPane;
import javafx.scene.text.Text;
import javafx.scene.control.RadioButton;
import javafx.scene.control.ToggleGroup;
import javafx.scene.paint.Color;

public class Practical_20 extends Application 
{
	protected Text text = new Text(50, 50, "AxelBlazer");

	@Override 
	public void start(Stage primaryStage) 
	{
		HBox paneForButtons = new HBox(20);
		Button btLeft = new Button("<=");
		Button btRight = new Button("=>");
		paneForButtons.getChildren().addAll(btLeft, btRight);
		paneForButtons.setAlignment(Pos.CENTER);
		BorderPane pane = new BorderPane();
		pane.setBottom(paneForButtons);

		HBox paneForRadioButtons = new HBox(20);
		RadioButton rbBlue = new RadioButton("Blue");
		RadioButton rbPurple = new RadioButton("Purple");
		RadioButton rbRed = new RadioButton("Red");
		RadioButton rbOrange = new RadioButton("Orange");
		RadioButton rbGreen = new RadioButton("Green");
		paneForRadioButtons.getChildren().addAll(rbBlue, rbPurple, rbRed, rbOrange, rbGreen);

		ToggleGroup group = new ToggleGroup();
		rbBlue.setToggleGroup(group);
		rbPurple.setToggleGroup(group);
		rbRed.setToggleGroup(group);
		rbOrange.setToggleGroup(group);
		rbGreen.setToggleGroup(group);

		Pane paneForText = new Pane();
		paneForText.setStyle("-fx-border-color: black");
		paneForText.getChildren().add(text);
		pane.setCenter(paneForText);
		pane.setTop(paneForRadioButtons);

		btLeft.setOnAction(e -> text.setX(text.getX() - 10));
		btRight.setOnAction(e -> text.setX(text.getX() + 10));

		rbBlue.setOnAction(e -> 
		{
			if(rbBlue.isSelected()) 
				text.setFill(Color.BLUE);
		});

		rbPurple.setOnAction(e -> 
		{
			if(rbPurple.isSelected()) 
				text.setFill(Color.PURPLE);
		});

		rbRed.setOnAction(e -> 
		{
			if(rbRed.isSelected()) 
				text.setFill(Color.RED);
		});

		rbOrange.setOnAction(e -> 
		{
			if(rbOrange.isSelected()) 
				text.setFill(Color.ORANGE);
		});

		rbGreen.setOnAction(e -> 
		{
			if(rbGreen.isSelected()) 
				text.setFill(Color.GREEN);
		});

		Scene scene = new Scene(pane, 450, 150);
		primaryStage.setTitle("Practical_20"); 
		primaryStage.setScene(scene); 
		primaryStage.show(); 
	}
}
